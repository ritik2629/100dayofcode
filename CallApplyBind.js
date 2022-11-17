let nameTest={
    firstName :'ritik',
    lastName:'raj',
    printFullName :function(){
        console.log(this.firstName + " " + this.lastName)
    }
}
nameTest.printFullName()  //This method is good but be repeat if we add more user

let name ={
    firstName:'ritik',
    lastName:'raj'
}
const printFullName=function(hometown,state){
    console.log(` ${this.firstName} ${this.lastName} from ${hometown} ${state}`)
}

printFullName.call(name,'dhanbad','jharkhand')

let name1={
    firstName:'manish',
    lastName:'kumar'
}
printFullName.apply(name1,['patna','bihar'])


const bindMethod =printFullName.bind(name,'dhanbad','jharkhand')

console.log(bindMethod)

bindMethod()