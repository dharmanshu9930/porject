let input = prompt("Enter Your Function")
let i = 1
let notelist = []

while(input){
    if (input === 'new'){
    let note = prompt("Enter Your note")
    notelist.push(note)
    console.log(`${notelist[i-1]} is added to the notes`)
    i++
    input = prompt("Enter Your Function")
    }
    else if(input === 'list'){
        console.log('##########################################################')
        for (const notes of notelist) {
            console.log(`${notelist.indexOf(notes) +1} ${notes}`)
        }
        console.log('##########################################################')
        input = prompt("Enter Your Function")
    }
    else if(input === 'delete'){
        let rvalue = parseInt(prompt('Enter the note to remove'))
        let removed = notelist.splice(rvalue -1, 1)
        console.log('After Deleting ###########################################')
        for (const notes of notelist) {
            console.log(`${notelist.indexOf(notes) +1} ${notes}`)
        }
        console.log('##########################################################')
        input = prompt("Enter Your Function")
        i--
    }
    else if(input === 'quit')break
    else{
        input = prompt("You didn't enter a valid function please enter again!!")
    }
}