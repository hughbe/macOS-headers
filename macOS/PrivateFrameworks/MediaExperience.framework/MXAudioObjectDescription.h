//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol aura_Object;

@interface MXAudioObjectDescription : NSObject
{
    id <aura_Object> mObject;
    unsigned int mClassID;
    unsigned long long mObjectID;
}

- (void).cxx_destruct;
@property(readonly) unsigned int classID; // @synthesize classID=mClassID;
@property(readonly) unsigned long long objectID; // @synthesize objectID=mObjectID;
@property(readonly) __weak id <aura_Object> object; // @synthesize object=mObject;
- (id)init;

@end

