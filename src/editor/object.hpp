// This file is part of Dust Racing (DustRAC).
// Copyright (C) 2011 Jussi Lind <jussi.lind@iki.fi>
//
// DustRAC is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// DustRAC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with DustRAC. If not, see <http://www.gnu.org/licenses/>.

#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <QGraphicsItem>
#include <QPixmap>

#include "../common/objectbase.hpp"

//! Freely placeable object.
class Object : public QGraphicsItem, public ObjectBase
{
public:

    //! Constructor.
    Object(QString category, QString role, QSizeF size, QPixmap pixmap);

    //! \reimp
    virtual QRectF boundingRect () const;

    //! \reimp
    virtual void paint(QPainter * painter,
        const QStyleOptionGraphicsItem * option, QWidget * widget = 0);

    //! \reimp
    //! Sets the Object and QGraphicsItem locations.
    virtual void setLocation(QPointF newLocation);

private:

    //! Original size of the tile in pixels.
    QSizeF m_size;

    //! Image of the tile.
    QPixmap m_pixmap;
};

#endif // OBJECT_HPP
