using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    private Rigidbody playerRB;
    private Animator playerAnimator;
    public float jumpForce = 10;
    public float gravityModifyer;
    public bool isOnGround = true;
    public bool doubleJump = false;
    public bool isGameOver = false;
    public bool dashing = false;
    public ParticleSystem explosionPart;
    public AudioClip jumpSound;
    public AudioClip crashSound;
    private AudioSource playerAudio;

    // Start is called before the first frame update
    void Start()
    {
        playerRB = GetComponent<Rigidbody>();
        playerAnimator = GetComponent<Animator>();
        if (Physics.gravity.y > -10f)
        {
            Physics.gravity *= gravityModifyer;
        }
        playerAudio = GetComponent<AudioSource>();
        playerRB.transform.position = Vector3.zero;
    }

    // Update is called once per frame
    void Update()
    {
        /*  
         *  if the spacebar is pressed and the game's not over
         *  if they're on the ground, jump and set the option to double jump
         *  if they're in the air, see if they're allowed to double jump
         *  can only double jump before, or near the apex of the original jump
         *  if double jumpped, disable the option to jump again.
         */
        if (Input.GetKeyDown(KeyCode.Space) && !isGameOver)
        {
            if (isOnGround)
            {
                playerRB.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
                isOnGround = false;
                doubleJump = true;
                playerAnimator.SetTrigger("Jump_trig");
                playerAudio.PlayOneShot(jumpSound);
            }else if (doubleJump)// && playerRB.velocity.y > -5)
            {
                playerRB.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
                doubleJump = false;
                //playerAnimator.SetTrigger("Jump_trig");
                playerAudio.PlayOneShot(jumpSound);
            }
        }
    }

    /* whenever user collides with something
     * if it's the ground, reset jump booleans
     * if it's an obstacle,
     * play the crash sound, animate the crash death/particcles
     * set isGameOver to true
     */
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            isOnGround = true;
            doubleJump = false;
        }else if (collision.gameObject.CompareTag("Obstacle"))
        {
            playerAudio.PlayOneShot(crashSound);
            isGameOver = true;
            playerAnimator.SetBool("Death_b", true);
            playerAnimator.SetInteger("DeathType_int", 1);
            explosionPart.Play();
        }
    }
}
