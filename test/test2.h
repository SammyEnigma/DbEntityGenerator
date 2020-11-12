/*This file is auto generated by DbEntityGenerator*/
#pragma once

#include <qobject.h>
#include <qvariant.h>

class Test2 {
private:
    //����������
    qint64 id;
    //
    QString name;
    //
    int number;
    //
    int number2;
    //�Զ�������
    QVariant varianttype;

    ///transient ��ʱ����
    QString nametmp;

public:
    Test2() {
        number = 0;
    }

    Test2(
        qint64 id,
        const QString& name,
        int number,
        int number2,
        const QVariant& varianttype
    ) : id(id)
    , name(name)
    , number(number)
    , number2(number2)
    , varianttype(varianttype)
    { }

private:
    static int fieldSize() {
        return 5;
    }

    static QString getTableName() {
        return QStringLiteral("ts_test2");
    }
    
    static QStringList getFieldsType() {
        return QStringList() 
        << QStringLiteral("id integer autoincrement")
        << QStringLiteral("name text not null")
        << QStringLiteral("number integer default 0")
        << QStringLiteral("number2 integer")
        << QStringLiteral("varianttype blob")
        << QStringLiteral("nametmp text");
    }

    static QStringList getPrimaryKeys() {
        return QStringList() << "id";
    }
    
    static QList<QStringList> getIndexFields() {
        return QList<QStringList>()
        << (QStringList() << "number2")
        << (QStringList() << "number" << "number2");
    }

    static QList<QStringList> getUniqueIndexFields() {
        return QList<QStringList>()
        << (QStringList() << "name" << "number");
    }

public:
    //set ����������
    inline void setId(qint64 id) {this->id = id;}
    //get ����������
    inline qint64 getId() const {return id;}
    //
    inline void setName(const QString& name) {this->name = name;}
    //
    inline QString getName() const {return name;}
    //
    inline void setNumber(int number) {this->number = number;}
    //
    inline int getNumber() const {return number;}
    //
    inline void setNumber2(int number2) {this->number2 = number2;}
    //
    inline int getNumber2() const {return number2;}
    //set �Զ�������
    inline void setVarianttype(const QVariant& varianttype) {this->varianttype = varianttype;}
    //get �Զ�������
    inline QVariant getVarianttype() const {return varianttype;}
    //set ��ʱ����
    inline void setNametmp(const QString& nametmp) {this->nametmp = nametmp;}
    //get ��ʱ����
    inline QString getNametmp() const {return nametmp;}
};
typedef QList<Test2> Test2List;