//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMAccountLimits : FATObject
{
    NSNumber *_userMailLimitDaily;
    NSNumber *_noteSizeMax;
    NSNumber *_resourceSizeMax;
    NSNumber *_userLinkedNotebookMax;
    NSNumber *_uploadLimit;
    NSNumber *_userNoteCountMax;
    NSNumber *_userNotebookCountMax;
    NSNumber *_userTagCountMax;
    NSNumber *_noteTagCountMax;
    NSNumber *_userSavedSearchesMax;
    NSNumber *_noteResourceCountMax;
    NSNumber *_userDeviceLimit;
    NSNumber *_userAdvertisedDeviceLimit;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *userAdvertisedDeviceLimit; // @synthesize userAdvertisedDeviceLimit=_userAdvertisedDeviceLimit;
@property(retain, nonatomic) NSNumber *userDeviceLimit; // @synthesize userDeviceLimit=_userDeviceLimit;
@property(retain, nonatomic) NSNumber *noteResourceCountMax; // @synthesize noteResourceCountMax=_noteResourceCountMax;
@property(retain, nonatomic) NSNumber *userSavedSearchesMax; // @synthesize userSavedSearchesMax=_userSavedSearchesMax;
@property(retain, nonatomic) NSNumber *noteTagCountMax; // @synthesize noteTagCountMax=_noteTagCountMax;
@property(retain, nonatomic) NSNumber *userTagCountMax; // @synthesize userTagCountMax=_userTagCountMax;
@property(retain, nonatomic) NSNumber *userNotebookCountMax; // @synthesize userNotebookCountMax=_userNotebookCountMax;
@property(retain, nonatomic) NSNumber *userNoteCountMax; // @synthesize userNoteCountMax=_userNoteCountMax;
@property(retain, nonatomic) NSNumber *uploadLimit; // @synthesize uploadLimit=_uploadLimit;
@property(retain, nonatomic) NSNumber *userLinkedNotebookMax; // @synthesize userLinkedNotebookMax=_userLinkedNotebookMax;
@property(retain, nonatomic) NSNumber *resourceSizeMax; // @synthesize resourceSizeMax=_resourceSizeMax;
@property(retain, nonatomic) NSNumber *noteSizeMax; // @synthesize noteSizeMax=_noteSizeMax;
@property(retain, nonatomic) NSNumber *userMailLimitDaily; // @synthesize userMailLimitDaily=_userMailLimitDaily;

@end

