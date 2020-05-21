//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHSynchronizable.h>

__attribute__((visibility("hidden")))
@interface CHLogServer : CHSynchronizable
{
    struct unordered_map<const char *, os_log_s *, std::__1::hash<const char *>, std::__1::equal_to<const char *>, std::__1::allocator<std::__1::pair<const char *const, os_log_s *>>> fLogHandles;
}

+ (id)instance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)createLogHandleForDomainSync:(const char *)arg1;
- (struct os_log_s *)logHandleForDomainSync:(const char *)arg1;
- (struct os_log_s *)logHandleForDomain:(const char *)arg1;
- (id)init;

@end

