//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _UIActivityItemCustomizationGroup : NSObject
{
    NSString *_name;
    NSString *_identifier;
    NSArray *_customizations;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *customizations; // @synthesize customizations=_customizations;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_initGroupWithName:(id)arg1 identifier:(id)arg2 customizations:(id)arg3;

@end

