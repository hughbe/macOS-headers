//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASDSelectorValue : NSObject
{
    unsigned int _value;
    NSString *_name;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int value; // @synthesize value=_value;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

