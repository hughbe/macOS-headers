//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (AXExtensions)
+ (id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 arguments:(struct __va_list_tag [1])arg4;
+ (id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)ax_errorWithDomain:(id)arg1 description:(id)arg2;
- (id)ax_nonRedundantDescription;
@end

