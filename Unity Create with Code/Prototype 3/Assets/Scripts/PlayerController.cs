using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public Rigidbody playerRb;
    public ParticleSystem explosionParticle;
    public ParticleSystem dirtParticle;
<<<<<<< HEAD
=======
    public AudioClip jumpSound;
    public AudioClip crashSound;
>>>>>>> new
    public float jumpForce;
    public float gravityModifier;
    public bool isOnGround;

    public bool gameOver = false;

<<<<<<< HEAD
=======

    private AudioSource playerAudio;
>>>>>>> new
    private Animator playerAnim;

    // Start is called before the first frame update
    void Start()
    {
        playerRb = GetComponent<Rigidbody>();
        playerAnim = GetComponent<Animator>();
<<<<<<< HEAD

=======
        playerAudio = GetComponent<AudioSource>();
>>>>>>> new
        Physics.gravity *= gravityModifier;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) && isOnGround && !gameOver)
        {
<<<<<<< HEAD
            playerRb.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
            isOnGround = false;
            playerAnim.SetTrigger("Jump_trig");
            dirtParticle.Stop();
=======
            playerAudio.PlayOneShot(jumpSound, 1.0f);
            playerRb.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
            isOnGround = false;
            dirtParticle.Stop();
            playerAnim.SetTrigger("Jump_trig");
>>>>>>> new
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            isOnGround = true;
            dirtParticle.Play();
<<<<<<< HEAD
        }else if (collision.gameObject.CompareTag("Obstacle"))
        {
=======
        }
        else if (collision.gameObject.CompareTag("Obstacle"))
        {
            playerAudio.PlayOneShot(crashSound, 1.0f);
            explosionParticle.Play();
            dirtParticle.Stop();
>>>>>>> new
            gameOver = true;
            Debug.Log("Game Over");
            playerAnim.SetBool("Death_b", true);
            playerAnim.SetInteger("DeathType_int", 1);
<<<<<<< HEAD
            explosionParticle.Play();
            dirtParticle.Stop();
=======

>>>>>>> new
        }
    }
}
