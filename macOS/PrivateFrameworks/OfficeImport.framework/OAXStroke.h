//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXStroke : NSObject
{
}

+ (id)readStrokeFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (id)readCustomDashFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readPresetDashFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readLineEndFromXmlNode:(struct _xmlNode *)arg1;
+ (id)presetDashEnumMap;
+ (id)lineEndLengthEnumMap;
+ (id)lineEndWidthEnumMap;
+ (id)lineEndTypeEnumMap;
+ (id)penAlignmentEnumMap;
+ (id)lineCapEnumMap;
+ (id)compoundLineEnumMap;

@end

