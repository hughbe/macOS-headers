//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Security/CTKClientSEP_TKTLVRecord.h>

__attribute__((visibility("hidden")))
@interface CTKClientSEP_TKBERTLVRecord : CTKClientSEP_TKTLVRecord
{
}

+ (id)parseFromDataSource:(id)arg1;
+ (id)dataForTag:(unsigned long long)arg1;
+ (unsigned long long)encodeNumber:(unsigned long long)arg1 into:(char *)arg2;
+ (id)zuluDateFormatter;
- (id)initWithTag:(unsigned long long)arg1 records:(id)arg2;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1;

@end

