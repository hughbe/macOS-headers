//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSContextProvider-Protocol.h>

@class NSArray;

@protocol CLSContextProviderInternal <CLSContextProvider>
- (void)updateDescendantsOfContextPath:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getMainAppContextPathWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

