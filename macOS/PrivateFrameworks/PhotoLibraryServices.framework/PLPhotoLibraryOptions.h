//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPhotoLibraryOptions : NSObject
{
    BOOL _automaticallyMergesContext;
    BOOL _preventsWaitingForRequiredState;
    int _libraryRole;
    long long _requiredState;
}

@property(nonatomic) BOOL preventsWaitingForRequiredState; // @synthesize preventsWaitingForRequiredState=_preventsWaitingForRequiredState;
@property(nonatomic) int libraryRole; // @synthesize libraryRole=_libraryRole;
@property(nonatomic) long long requiredState; // @synthesize requiredState=_requiredState;
@property(nonatomic) BOOL automaticallyMergesContext; // @synthesize automaticallyMergesContext=_automaticallyMergesContext;

@end

