using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawn : MonoBehaviour
{
    public GameObject[] enemyPrefabs;
    public GameObject enemySpawnPlaces;

    float SpawnTime = 5f;
    float currentTime;

    float speed = 2f;


    private void Update()
    {
        if(!GameManager.instance.isDead)
        StartEnemySpawn();
    }

    void StartEnemySpawn()
    {
        currentTime += Time.deltaTime;

        if(currentTime >= SpawnTime && !GameManager.instance.isDone)
        StartCoroutine(Spawn());
    }

    IEnumerator Spawn()
    {
        currentTime = 0;

        int random = Random.Range(0,2);

        yield return null;

        GameObject enemy = Instantiate(enemyPrefabs[Random.Range(0,4)], enemySpawnPlaces.transform.position, Quaternion.identity);

        Rigidbody enemyRig = enemy.GetComponent<Rigidbody>();

        enemyRig.velocity = new Vector3(0,0,-1f) * speed;

        Destroy(enemy, 5f);

        SpawnTime = Random.Range(3f,5f);

        SpawnTime -= GameManager.instance.level * 0.2f;

    }
}
