//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNote, NSArray, NSString;

@interface EDAMNoteEmailParameters : FATObject
{
    NSString *_guid;
    EDAMNote *_note;
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSString *_subject;
    NSString *_message;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSArray *ccAddresses; // @synthesize ccAddresses=_ccAddresses;
@property(retain, nonatomic) NSArray *toAddresses; // @synthesize toAddresses=_toAddresses;
@property(retain, nonatomic) EDAMNote *note; // @synthesize note=_note;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;

@end

