//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>
#import <Safari/WBSUISafariSandboxBrokerProtocol-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@protocol SafariSandboxBrokerProtocol <WBSUISafariSandboxBrokerProtocol, NSObject>
- (void)migrateResourcesToSandbox:(NSDictionary *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)cancelUnarchivingOperationWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)extractArchiveAtPath:(NSString *)arg1 type:(unsigned long long)arg2 identifier:(NSString *)arg3 completionHandler:(void (^)(NSString *, NSError *))arg4;
- (void)synchronouslyRemoveQuarantineHardAttributeFromFileAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)writeWebArchiveWithoutQuarantineFlag:(NSData *)arg1 atURL:(NSURL *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)synchronouslyIssueExtensionForDirectoryContainingDownloadDestinationAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)issueRootExtensionWithCompletionHandler:(void (^)(NSString *))arg1;
- (void)issueDevelopModeExtensionWithCompletionHandler:(void (^)(NSString *))arg1;
@end

