//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKSerializableObject.h>

@class NSString, NSURL;

@interface EKSerializableAttachment : EKSerializableObject
{
    NSURL *_urlOnDisk;
    NSString *_contentTypeFromServer;
}

+ (id)classesForKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contentTypeFromServer; // @synthesize contentTypeFromServer=_contentTypeFromServer;
@property(retain, nonatomic) NSURL *urlOnDisk; // @synthesize urlOnDisk=_urlOnDisk;
- (id)createAttachment;
- (id)initWithAttachment:(id)arg1;

@end

