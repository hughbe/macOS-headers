//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABGroupListCellViewStyle : NSObject
{
}

+ (id)textColorForColorType:(unsigned long long)arg1;
+ (id)convertFont:(id)arg1 forColorType:(unsigned long long)arg2;
+ (void)setColor:(id)arg1 font:(id)arg2 onTextField:(id)arg3;
+ (void)updateTextField:(id)arg1 withColorType:(unsigned long long)arg2 state:(CDStruct_8024420c)arg3;
+ (unsigned long long)colorTypeForState:(CDStruct_8024420c)arg1;
+ (BOOL)textFieldHasFieldEditor:(id)arg1;
+ (void)updateAppearanceOfTextField:(id)arg1 withRowView:(id)arg2 ofType:(unsigned long long)arg3;

@end

