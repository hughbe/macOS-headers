//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUImageWriter : NSObject
{
}

- (id)encodedModelFromAnnotationsController:(id)arg1 encrypt:(BOOL)arg2;
- (BOOL)writeUsingBaseImage:(id)arg1 withAnnotationsFromController:(id)arg2 asImageOfType:(id)arg3 toConsumer:(struct CGDataConsumer *)arg4 embedSourceImageAndAnnotationsAsMetadata:(BOOL)arg5 encryptPrivateMetadata:(BOOL)arg6 error:(id *)arg7;

@end

