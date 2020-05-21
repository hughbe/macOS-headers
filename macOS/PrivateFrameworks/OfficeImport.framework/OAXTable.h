//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTable : NSObject
{
}

+ (id)readDefaultTableStyleWithDrawingState:(id)arg1;
+ (void)cacheTableStylesInPart:(id)arg1 cache:(id)arg2 drawingState:(id)arg3;
+ (id)readFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readTableStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readRowsFromTableXmlNode:(struct _xmlNode *)arg1 toTable:(id)arg2 drawingState:(id)arg3;
+ (void)readRowFromXmlNode:(struct _xmlNode *)arg1 toRow:(id)arg2 drawingState:(id)arg3;
+ (void)readCellFromXmlNode:(struct _xmlNode *)arg1 toCell:(id)arg2 drawingState:(id)arg3;
+ (id)readCellPropertiesFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readGridFromXmlNode:(struct _xmlNode *)arg1 toGrid:(id)arg2 drawingState:(id)arg3;
+ (void)readPropertiesFromXmlNode:(struct _xmlNode *)arg1 toProperties:(id)arg2 drawingState:(id)arg3;
+ (id)readPartStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readTextStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (int)readOnOffFlag:(id)arg1;
+ (id)readCellStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readCellBorderStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readThemableEffectsFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readThemableFillFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readThemableStrokeFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;

@end

