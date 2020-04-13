console.time("Initialize Time");
var Version = "Alpha 1b";
var copyrightDisp = document.getElementById('infomation');
var date = new Date;
var year = date.getFullYear();

copyrightDisp.innerHTML = `Crafter JS Version: ${Version} | © 2020 ~ ${year} Xiaomai, Some right reserved.`
console.log(`%cCrafter JS ${Version} Running`, 'color:#00aa00; font-size:16px; font-weight:700');
console.info(`Test type: AlphaVersion`);
console.warn(`Test time: ${date}`);

/**
 * @method Item
 * @description Create an Item Receipt
 * @param {String} Iname 
 * @param {String} Desc 
 * @param {Item} Obj1 
 * @param {Item} Obj2 
 */
function Item(Iname, Desc, Obj1, Obj2, category = "Element") {
    this.itemName = Iname;
    this.desc = Desc;
    this.recp1 = Obj1;
    this.recp2 = Obj2;
    this.crafted = false;
    this.itemID;
    this.category = category;
};

// console.log(Item);
console.dir(Item);

function BasicItem(Iname, Desc) {
    this.itemName = Iname;
    this.desc = Desc;
}

var basicList = [
    new BasicItem(
        "Fire",
        "basic Ingredient",
    ),
    new BasicItem(
        "Water",
        "basic Ingredient",
    ),
    new BasicItem(
        "Earth",
        "basic Ingredient",
    ),
    new BasicItem(
        "Air",
        "basic Ingredient",
    )
];
// console.table(basicList);

var recipeList = [
    new Item(
        "Lava",
        "",
        "Earth",
        "Fire"
    ),
    new Item(
        "Swamp",
        "",
        "Earth",
        "Water"
    ),
    new Item(
        "Dust",
        "",
        "Earth",
        "Air"
    ),
    new Item(
        "Energy",
        "",
        "Air",
        "Fire"
    ),
    new Item(
        "Steam",
        "",
        "Air",
        "Water"
    ),
    new Item(
        "Storm",
        "",
        "Air",
        "Energy"
    ),
    new Item(
        "Stone",
        "",
        "Air",
        "Lava"
    ),
    new Item(
        "Metal",
        "",
        "Fire",
        "Stone"
    ),
    new Item(
        "Sand",
        "",
        "Air",
        "Stone"
    ),
    new Item(
        "Glass",
        "",
        "Fire",
        "Sand"
    ),
    new Item(
        "Clay",
        "",
        "Sand",
        "Swamp"
    ),
    new Item(
        "Bricks",
        "",
        "Clay",
        "Fire"
    ),
    new Item(
        "Boiler",
        "",
        "Metal",
        "Steam"
    ),
    new Item(
        "Alcohol",
        "",
        "Fire",
        "Water"
    ),
    new Item(
        "Ash",
        "",
        "Fire",
        "Dust"
    ),
    new Item(
        "Vodka",
        "",
        "Alcohol",
        "Water"
    ),
    new Item(
        "Life",
        "",
        "Energy",
        "Swamp"
    ),
    new Item(
        "Ghost",
        "",
        "Ash",
        "Life"
    ),
    new Item(
        "Golem",
        "",
        "Clay",
        "Life"
    ),
    new Item(
        "Bacteria",
        "",
        "Life",
        "Swamp"
    ),
    new Item(
        "Sulfur",
        "",
        "Bacteria",
        "Swamp"
    ),
    new Item(
        "Worm",
        "",
        "Bacteria",
        "Swamp"
    ),
    new Item(
        "Beetle",
        "",
        "Earth",
        "Worm"
    ),
    new Item(
        "Scorpion",
        "",
        "Beetle",
        "Sand"
    ),
    new Item(
        "Butterfly",
        "",
        "Air",
        "Worm"
    ),
    new Item(
        "Plankton",
        "",
        "Bacteria",
        "Water"
    ),
    new Item(
        "Shell",
        "",
        "Plankton",
        "Water"
    ),
    new Item(
        "Egg",
        "",
        "Life",
        "Stone"
    ),
    new Item(
        "Fish",
        "",
        "Bacteria",
        "Plankton"
    ),
    new Item(
        "Egg",
        "",
        "Life",
        "Stone"
    ),
    new Item(
        "Snake",
        "",
        "Worm",
        "Sand"
    ),
    new Item(
        "Lizard",
        "",
        "Swamp",
        "Egg"
    ),
    new Item(
        "Lizard",
        "",
        "Worm",
        "Snake"
    ),
    new Item(
        "Beast",
        "",
        "Lizard",
        "Earth"
    ),
    new Item(
        "Dolphin",
        "",
        "Fish",
        "Beast"
    ),
    new Item(
        "Human",
        "",
        "Beast",
        "Life"
    ),
    new Item(
        "Tools",
        "",
        "Human",
        "Metal"
    ),
    new Item(
        "Limestone",
        "",
        "Shell",
        "Stone"
    ),
    new Item(
        "Cement",
        "",
        "Clay",
        "Limestone"
    ),
    new Item(
        "Concrete",
        "",
        "Cement",
        "Water"
    ),
    new Item(
        "House",
        "",
        "Concrete",
        "Brick"
    ),
    new Item(
        "Sky scraper",
        "",
        "Glass",
        "House",
        "Final"
    ),
    new Item(
        "Electricity",
        "",
        "Metal",
        "Energy"
    ),
    new Item(
        "Weeds",
        "",
        "Water",
        "Life"
    ),
    new Item(
        "Moss",
        "",
        "Weeds",
        "Swamp"
    ),
    new Item(
        "Mushroom",
        "",
        "Weeds",
        "Earth"
    ),
    new Item(
        "Fern",
        "",
        "Moss",
        "Swamp"
    ),
    new Item(
        "Grass",
        "",
        "Moss",
        "Earth"
    ),
    new Item(
        "Reed",
        "",
        "Grass",
        "Swamp"
    ),
    new Item(
        "Seeds",
        "",
        "Grass",
        "Grass"
    ),
    new Item(
        "Tobacco",
        "",
        "Grass",
        "Fire"
    ),
];
// console.table(recipeList);

var messageBox = document.getElementById('message');

/**
 * @description Show Message on UI
 * @param {String} message 要显示的信息
 * @param {String} color 字体颜色
 */
function Message(message, color) {
    messageBox.innerHTML = message;
    messageBox.style.color = color;
    setTimeout(function () {
        messageBox.innerHTML = "";
    }, 1000);
}

// 给予 Item ID
for (let i in recipeList) {
    recipeList[i].itemID = i;
}

console.groupCollapsed("Basic List Init:");
// Game Initialize
for (let i = 0; i < basicList.length; i++) {
    AddInventory(basicList[i], "Basic", false);
}
console.groupEnd();

// 获取输入框值
var Value1, Value2;
function GetInputSlot() {
    var input1 = document.getElementById('input1');
    var input2 = document.getElementById('input2');
    Value1 = input1.value;
    Value2 = input2.value;
}

// 材料按钮点击事件
function ItemInput(button) {
    console.log(`Insert: ${button.value}`);
    GetInputSlot();
    if (input1.value == false) {
        input1.value = button.value;
    } else if (input2.value == false) {
        input2.value = button.value;
    } else {
        console.log("Can't input because both Input are filled");
        Message(`Can't input because both Input are filled`, 'Red');
    }
}

// 清空输入栏
function ClearInput(input) {
    console.log(`Clear input: ${input.value}`);
    input.value = "";
};

function ClearAllInput() {
    input1.value = "";
    input2.value = "";
}

function Craft() {
    GetInputSlot();
    ClearAllInput();
    if (Value1 == false || Value2 == false) {
        console.log(`Unable to craft because insufficient of input!`);
        Message(`Unable to craft because insufficient of input!`, '#e71837');
    } else {
        console.time("Search Time");
        console.groupCollapsed("Search Recipe:");
        console.log(`For...in started, itemLength: ${recipeList.length}`);
        console.log(`input1: ${Value1}`);
        console.log(`input2: ${Value2}`);
        for (let i in recipeList) {
            console.count("Search");
            let itemName = recipeList[i].itemName;
            let recp1 = recipeList[i].recp1;
            let recp2 = recipeList[i].recp2;
            let crafted = recipeList[i].crafted;
            console.log(`Attempt ${i}: ItemName: ${itemName}, recp1: ${recp1}, recp2: ${recp2}`)
            if (Value1 == recp1 && Value2 == recp2) {
                if (crafted) {
                    console.log(`This Item (${itemName}) had been already crafted!`);
                    Message(`This Item (${itemName}) had been already discovered!`, "#e71837");
                    ClearAllInput();
                    console.groupEnd();
                    console.timeEnd("Search Time");
                    return;
                } else {
                    console.log(`(${itemName}) Crafted!`);
                    Message(`(${itemName}) Discovered!`, "#a5d610");
                    recipeList[i].crafted = true;
                    // Append a button in Inventory
                    AddInventory(recipeList[i]);
                    console.groupEnd();
                    console.timeEnd("Search Time");
                    return;
                }
            } else if (Value1 == recp2 && Value2 == recp1) {
                if (crafted) {
                    console.log(`This Item (${itemName}) had been already crafted!`);
                    Message(`This Item (${itemName}) had been already discovered!`, "#e71837");
                    ClearAllInput();
                    console.groupEnd();
                    console.timeEnd("Search Time");
                    return;
                } else {
                    console.log(`(${itemName}) Crafted!`);
                    Message(`(${itemName}) Discovered!`, "#a5d610");
                    recipeList[i].crafted = true;
                    // Append a button in Inventory
                    AddInventory(recipeList[i]);
                    console.groupEnd();
                    console.timeEnd("Search Time");
                    return;
                }
            } else {
                console.log("Failed");
                Message(`Nothing Happened!`, "#fce903");
            }
        }
        console.groupEnd();
        console.timeEnd("Search Time");
    }
}

/**
 * @description 添加新发现的按钮
 */
function AddInventory(item, category = "Element", gotTitle = true) {
    var inventory = document.getElementById(category);
    var btn = document.createElement('input');
    btn.setAttribute("class", "itemBtn");
    btn.setAttribute("type", "button");
    btn.setAttribute("value", item.itemName);
    if (gotTitle) {
        btn.setAttribute("title", `${item.recp1} + ${item.recp2}`)
    }
    btn.setAttribute("onclick", "ItemInput(this)");
    inventory.append(btn);
    console.debug(`${item.itemName} has add to your bagpack!`);
}

// // for test
// for (let i = 0; i < 1000; i++){
//     AddInventory(recipeList[5]);
// }
console.timeEnd("Initialize Time");