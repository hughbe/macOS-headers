//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface DSPModuleMOFetchUtil : NSObject
{
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)fetchAllWithCategory:(id)arg1 mode:(id)arg2 portType:(id)arg3 dspFlavor:(id)arg4 isInput:(id)arg5;
- (id)fetchWithCategory:(id)arg1 mode:(id)arg2 portType:(id)arg3 dspFlavor:(id)arg4 isInput:(id)arg5;
- (id)fetchAllWithName:(id)arg1;
- (id)fetchWithName:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1;

@end

