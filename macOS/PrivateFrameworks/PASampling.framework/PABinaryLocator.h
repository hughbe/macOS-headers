//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PABinaryLocator : NSObject
{
    NSMutableDictionary *_mappings;
    NSString *_buildNumber;
    BOOL _dirty;
    BOOL _enabled;
}

+ (id)sharedBinaryLocator;
- (void).cxx_destruct;
- (BOOL)removeURLForUUID:(id)arg1;
- (BOOL)addURLForCSSymbolOwner:(struct _CSTypeRef)arg1;
- (BOOL)addURL:(id)arg1 ForUUID:(id)arg2;
- (id)urlForUUID:(id)arg1;
- (void)saveMappings;
- (void)_saveMappings;
- (id)mappings;
@property BOOL enabled;
- (oneway void)done;
- (id)initSharedBinaryLocator;
- (id)init;

@end

