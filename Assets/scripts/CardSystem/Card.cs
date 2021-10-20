// 卡牌类 基础类
public class Card
{
    //卡牌编号
    public int id;
    public string cardName;
    public Card(int _id, string _cardName)
    {
        this.id = _id;
        this.cardName = _cardName;
    }

}

// 怪兽卡类
public class MonsterCard : Card
{

    // 怪兽攻击力
    public int attack;
    /// 生命值
    //public int healthPoint;
    // 生命值上限
    //public int healthPointMax;

    public int speed;


    public MonsterCard(int _id, string _cardName, int _attack, int _speed) : base(_id, _cardName)
    {
        this.attack = _attack;
        //this.healthPointMax = _healthPointMax;
        //this.healthPoint = _healthPointMax;
        this.speed = _speed;

    }
}

// 法术卡类 继承自卡牌类
public class SpellCard : Card
{

    public string effect;

    public SpellCard(int _id, string _cardName, string _effect) : base(_id, _cardName)
    {
        this.effect = _effect;
    }
}
