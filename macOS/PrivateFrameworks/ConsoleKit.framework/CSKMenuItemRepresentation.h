//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMenuItem, NSString;

@interface CSKMenuItemRepresentation : NSObject
{
    NSString *_property;
    NSMenuItem *_parentMenuItem;
    NSString *_groupIdentifier;
    id _value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(nonatomic) __weak NSMenuItem *parentMenuItem; // @synthesize parentMenuItem=_parentMenuItem;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (id)initWithProperty:(id)arg1;
- (id)init;

@end

