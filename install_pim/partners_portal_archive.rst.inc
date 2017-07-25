Getting Akeneo Partners Portal access
*************************************

Akeneo `Partners Portal <https://partners.akeneo.com/login>`_ login credentials are sent to you by email. In case you haven’t received it you can request one at: `Akeneo Helpdesk <http://helpdesk.akeneo.com/>`_

It’s important to know that there’re 2 types of users that can do this action:
  
* Supervisor
* Developers

Only Supervisors can create new Developers (user assigned to Developer group) by going to My Company > Contacts > Add Contact > Saving > Activating it (by clicking on the red X).

Adding Permissions into the Project
***********************************

Supervisor user has to add the allowed user to get the bootstrap into the Permission Box under the Project.

* Go to Activities menu, Projects
* Choose the corresponding project
* Edit the permission box with the white pen in a blue button
* Add new Users
 * Only Users created under the account, with a Supervisor or a Developer profile are going to be listed.
* Save
 * This going to send an email to the given users letting them know that their access to the project is ready.

If you are not a Supervisor, you should contact that person to be added under the permissions. You can check who the Supervisor is in your company by going in My Company > General Information and under the section Supervisors you will see them listed.

Sharing your SSH public key
***************************

Each user wanting to get the bootstrap archive has to share their SSH public key with Akeneo. Here are the steps:

* User has to click on their User name in the upper right corner.
* Select the Manage Public Keys
.. image:: ./papo/manage_public_keys.png
* Click Add a new public key
.. image:: ./papo/add_public_key.png
* Complete the form with:
 * A name
 * An email
 * Associated public key file content (usually located at ~/.ssh/id_rsa.pub) 
.. image:: ./papo/add_public_key_2.png
* Click save

Requesting an archive on the Partners Portal
********************************************

Once the users are authorized under the Permissions in the project, they will be able to see the download button on the project.

* Go to Activities menu, Projects
* Choose the corresponding project
* Look for the Version button on the right side of the screen.
* Click on it, you’ll be prompted to select one PIM EE version.

.. image:: ./papo/download_archive.png

Once this is done, you should see a completeness message. Bootstrap archive will be send to your email in the following 5 minutes. Sometimes it could take a bit more, but always check your Spam folder before requesting the bootstrap again.

We strongly recommend you to choose the latest version.
