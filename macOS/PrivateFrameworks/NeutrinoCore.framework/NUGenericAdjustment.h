//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUAdjustment.h>

@class NSDictionary, NSMutableDictionary;

@interface NUGenericAdjustment : NUAdjustment
{
    NSMutableDictionary *_settings;
}

- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
@property(copy, nonatomic) NSDictionary *settings;
- (id)initWithAdjustmentSchema:(id)arg1;

@end

