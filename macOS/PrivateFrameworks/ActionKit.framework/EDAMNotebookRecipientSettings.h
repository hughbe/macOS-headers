//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNotebookRecipientSettings : FATObject
{
    NSNumber *_reminderNotifyEmail;
    NSNumber *_reminderNotifyInApp;
    NSNumber *_inMyList;
    NSString *_stack;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *stack; // @synthesize stack=_stack;
@property(retain, nonatomic) NSNumber *inMyList; // @synthesize inMyList=_inMyList;
@property(retain, nonatomic) NSNumber *reminderNotifyInApp; // @synthesize reminderNotifyInApp=_reminderNotifyInApp;
@property(retain, nonatomic) NSNumber *reminderNotifyEmail; // @synthesize reminderNotifyEmail=_reminderNotifyEmail;

@end

