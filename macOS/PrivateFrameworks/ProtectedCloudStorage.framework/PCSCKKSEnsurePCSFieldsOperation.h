//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation
{
    PCSCKKSItemModifyContext *_context;
}

- (void).cxx_destruct;
@property(retain) PCSCKKSItemModifyContext *context; // @synthesize context=_context;
- (int)updateKeychain:(id)arg1 withAttributes:(id)arg2;
- (void)start;
- (_Bool)haveCKKSPlaintextEntitlements;
- (id)initWithItemModifyContext:(id)arg1;

@end

