//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXSheet : NSObject
{
}

+ (void)readDelayedSheeWithLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3;
+ (void)readFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readAllDrawablesWithState:(id)arg1;
+ (void)readLegacyDrawablesWithState:(id)arg1;
+ (void)readDrawablesWithState:(id)arg1;
+ (void)readSheetProperties:(struct _xmlNode *)arg1 state:(id)arg2;
+ (Class)exSheetClassFromXmlSheetType:(id)arg1 location:(id)arg2;
+ (void)readCommonSheetElementsFrom:(struct _xmlTextReader *)arg1 state:(id)arg2;

@end

