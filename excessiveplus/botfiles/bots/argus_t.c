/* Argus Heir - Quake III Arena Bot
 *
 * @date    10. April 2003
 * @author  chris <root@xube.de>
 **/

chat "argus"
{
    #include "teamplay.h"

    type "game_enter"
    {
        "We am to kill everyone in ", 4, ". This we like.";
        "We hunt. We kill. We leave. We happy.";
        "We see ", 1, "! Good sacrifice. Much joy.";
        "Argus lord of ", 4, ". All die.";
    }

    type "game_exit"
    {
        "Bigger bone to break than skinny-neck you.";
        "We go chase others now. Head start you get.";
        4, " not good for Argus. Argus gone.";
    }

    type "level_start"
    {
        "Breath of Argus hot like fire wind. It burn you.";
        "~One mind many. All want dead you.";
        "No chance for single-brainers in ", 4, ".";
        "Creed says kill. You are my offerings.";
    }

    type "level_end"
    {
        2, " must come into my mind and join.";
        2, " bone harder than ", 3, " bone. Next time both break.";
        "Minds must on more than ~one focus. Next time kill all.";
        "We need ascend. Find ~one within many.";
        "Too many inside Argus head, choke Argus skills.";
    }

    type "level_end_victory"
    {
        "Chosen to lead. We am chosen.";
        "Blood of victims bring we power.";
        "Silence to psychic voices. Argus like quiet now.";
        "Your mind screams revenge, ", 3, ", but only to die again.";
        "The road before us grow straight. We run fast to glory.";
        "Is happiness to see you gory.";
    }

    type "level_end_lose"
    {
        "No good. We must fulfill destiny.";
        "Clutter! Clutter all about. Head will explode.";
        "We go to find new way. We return.";
        "You not happy, ", 2, ". You soon dead.";
    }


    type "hit_talking"
    {
        "Cheat is inferior!";
        "No place for ", 0, " in perfect Argus world.";
        "You die hard. It hurt. We happy.";
    }

    type "damaged_nokill"
    {
        "It hurt! Hurt! Make pain! Be angry!";
        "All minds find focus hate on ,", 0, ".";
        "Now we shoot back. You still stand ", 0, "?";
        "Feed hunger, make focus. Not good day for ", 0, ".";
        "In pain, we learn.";
        0, "! You see?  You see? Still here.";
        "Hunt only ", 0, " now.";
    }

    type "hit_nokill"
    {
        "Choose to kill you slow. Is happiness.";
        "Armor break. Bone break. Soft inside.";
        0, " fear smell good, ", 0,". You scream make music.";
        "All voices of ", 0, " speak fear and pain. ~One line they take. We hear.";
        "Too easy. " , 0, " is no challenge to grow.";
        "It is what we do. It is destiny. It is joy.";
        "Mind feed on ", 0, " silent scream.";
        "Too much that hurt, ", 0, ". We know. We like.";
    }


    type "death_telefrag"
    {
        "Too many! Too many!";
        "Enter mind, not body!";
    }

    type "death_cratered"
    {
        "They say we can. They wrong!";
        "Voices catch me ... ungh ... voices not enough.";
        "All see ground! Ground see we!";
        "Road end cliff. Argus fall.";
    }

    type "death_lava"
    {
        "Abandon mind! Get out! Too hot!";
        "All voices scream to pain.";
        "Find new host for psyche. Must.";
    }

    type "death_slime"
    {
        "It burn in body and creep in mind.";
        "No thought, just eat us. Consume.";
    }

    type "death_drown"
    {
        "We birth new in here. New and better.";
        "Shoot We... it too slow. No happiness.";
        "Little bubbles not pretty. Run life away...";
        "Find peace. Find harmony. Find ...";
    }

    type "death_suicide"
    {
        "Confusion! Sort out...too late.";
        "Pain burn yellow. Burn red. Burn white. White pain!";
        "Some in We want this. We know.";
        "Not planned. No ascent."	;
    }

    type "death_gauntlet"
    {
        "Touch of single-brainer burns many.";
        "Energy scatter. Discord! Die, die, dying.";
    }

    type "death_rail"
    {
        "No sense it. No happy.";
        0," ruins all world.";
        "No thoughts to sense. Just... ssssss... camper ...";
        "No good this destiny, ", 0, ". We change. You get eat.";
    }

    type "death_bfg"
    {
        "Too many poppers!";
        "Each voice get boom-boom.";
        "Shrieking! Too many noise. Too many hurt!";
        "My pieces make altar. You need to pray.";
    }

    type "death_insult"
    {
        "Now We know mystery you not know, ", 0, ".";
        "Forever all know ", 0, " kill Argus. All hate ", 0, ".";
        "All is chaos! ", 0 ," win? No order to universe.";
        "Single-brainer ", 0, " too stupid to find joy. No deserve.";
        "We devolve to ", 0, " level. We fail.";
        "Colossal ridiculity is ", 0, ".";
        "We will find you, ", 0, " ... kill body, swallow soul, scatter thoughts. Nothing of ", 0, " remain.";
    }

    type "death_praise"
    {
        "Peace now. We thank.";
        "You alpha ~one. ", 0, " make new race.";
        "Too easy for ", 0 ,"...", 0 ," is chosen.";
        "We come to your mind now, ", 0, ". We stronger.";
        "Now you learn secret. We be you.";
        "Is sad.";
        "Bigger voice, ", 0, ", than all in me together.";
    }


    type "kill_rail"
    {
        "We see you always, ", 0, ". Nowhere to hide.";
        "Poke little hole in ", 0, ". You spill out. Happy.";
        "Poor ", 0, ". So much left, but voice is quiet.";
    }

    type "kill_gauntlet"
    {
        "Close ... close, ", 0, ". We smell you fear of die.";
        "We watch light leave eyes of ", 0, ". We like.";
    }

    type "kill_telefrag"
    {
        "Many voices ~one place. Many bodies not fit.";
    }

    type "kill_suicide"
    {
        0, " accept inevitable. Good logic.";
        "We think ", 0, " good. We wrong.";
        "Still We like. Less to hear.";
        "Single-brainer ", 0, " wrong compute. Hee hee.";
    }

    type "kill_insult"
    {
        "My egglings in you hatch, ", 0, ".";
        "Much happiness me. I wish you back so kill you over again.";
        "To followers We feed you.";
        "~One little voice to silence. Not enough, but happy.";
        0, " mind weak, body weak. It follows. Too easy.";
        "Glide on ", 0, " spill guts. Dance of joy.";
        "Hollow skull, make ", 0 ," candle. Need focus.";
    }

    type "kill_praise"
    {
        "Worthy sacrifice ", 0, ". They pleased. Argus stronger.";
        "Take pride, ", 0, ". Argus outnumber you.";
        "Now ", 0, " find mystery and peace.";
        "More thoughts I gather to kill ", 0, ".";
        0, " find focus. Argus need follow thought line.";
        0, " strong, but we strongest.";
        "We remember ", 0, " long time.";
    }


    type "random_insult"
    {
        "We hear you, ", 0 ,". Your mind cry out inferior.";
        "We am many, you only ~one, ", 0, ".";
        1, " voice run with spilling blood and gut. Is ecstacy.";
        "Better ", 1, " serve as nest for egglings.";
        "Only great survive. ", 0 ," easy die.";
        "You think stupid, ", 1, ". You weak! Argus do favor killing you.";
        "There only black empty for ", 0, ". No revelation.";
    }

    type "random_misc"
    {
        "Silence! All of you! Too much talk.";
        "Big boom-boom poppers make quiet faster. Need quiet!";
        "Ascend...climb...lie down, ", 0, " so ", 1 ," can stand on top you.";
        "The new psyche begins. Many voices as one. Join or be silence!";
        "We am never alone.";
        "Single-brainer know privacy. Envy...";
    }
}