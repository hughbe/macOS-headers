//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSObject, NSSet, NSString, NSURL, _SWCServiceSettings, _SWCServiceSpecifier;
@protocol OS_xpc_object;

@protocol SWCXPCServer
- (void)removeSettingsForKeys:(NSSet *)arg1 serviceSpecifier:(_SWCServiceSpecifier *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)removeSettingsForKeys:(NSSet *)arg1 serviceType:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)commitServiceSettings:(_SWCServiceSettings *)arg1 completionHandler:(void (^)(_SWCGeneration *, NSError *))arg2;
- (void)getServiceSettingsWithServiceSpecifier:(_SWCServiceSpecifier *)arg1 completionHandler:(void (^)(_SWCServiceSettings *, NSError *))arg2;
- (void)resetWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (void)showWithVerbosity:(unsigned char)arg1 isTTY:(BOOL)arg2 fileDescriptor:(NSObject<OS_xpc_object> *)arg3 completionHandler:(void (^)(void))arg4;
- (void)addAllAppsWithCompletionHandler:(void (^)(void))arg1;
- (void)setFlags:(unsigned int)arg1 mask:(unsigned int)arg2 forServiceWithServiceSpecifier:(_SWCServiceSpecifier *)arg3 createIfNeeded:(BOOL)arg4 completionHandler:(void (^)(BOOL, NSError *))arg5;
- (void)setDetails:(NSDictionary *)arg1 forServiceWithServiceSpecifier:(_SWCServiceSpecifier *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)removeServiceWithServiceSpecifier:(_SWCServiceSpecifier *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)addServiceWithServiceSpecifier:(_SWCServiceSpecifier *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)getDetailsWithServiceSpecifier:(_SWCServiceSpecifier *)arg1 URL:(NSURL *)arg2 limit:(unsigned long long)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)getInfoWithServiceSpecifier:(_SWCServiceSpecifier *)arg1 URL:(NSURL *)arg2 limit:(unsigned long long)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)waitForSiteApprovalWithServiceSpecifier:(_SWCServiceSpecifier *)arg1 completionHandler:(void (^)(_SWCServiceDetails *, NSError *))arg2;
- (void)checkServiceWithServiceSpecifier:(_SWCServiceSpecifier *)arg1 completionHandler:(void (^)(BOOL, unsigned int, NSDictionary *, NSError *))arg2;
@end

