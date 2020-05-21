//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface VSValueTypeProperty : NSObject
{
    NSString *_name;
    unsigned long long _kind;
    NSSet *_allowedClasses;
    id _initialValue;
}

+ (id)valueTypePropertyWithName:(id)arg1 kind:(unsigned long long)arg2 allowedClasses:(id)arg3 initialValue:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) id initialValue; // @synthesize initialValue=_initialValue;
@property(copy, nonatomic) NSSet *allowedClasses; // @synthesize allowedClasses=_allowedClasses;
@property(nonatomic) unsigned long long kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

