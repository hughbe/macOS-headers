//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICNFIMAPClientFetchDataItem.h>

@class NSString;

@interface ICNFIMAPClientFetchBodyDataItem : ICNFIMAPClientFetchDataItem
{
    long long _textSectionSpecifier;
    NSString *_partSectionSpecifier;
    struct _NSRange _dataRange;
}

+ (id)newSectionSpecifierFromPart:(id)arg1 text:(long long)arg2;
- (void).cxx_destruct;
@property(readonly) struct _NSRange dataRange; // @synthesize dataRange=_dataRange;
@property(readonly, copy) NSString *partSectionSpecifier; // @synthesize partSectionSpecifier=_partSectionSpecifier;
@property(readonly) long long textSectionSpecifier; // @synthesize textSectionSpecifier=_textSectionSpecifier;
@property(readonly) BOOL isHeader;
- (void)_finalizeCommandStringWithHeaderFieldNames:(id)arg1 peek:(BOOL)arg2;
- (id)initWithHeaderFieldNames:(id)arg1;
- (id)initWithPartSectionSpecifier:(id)arg1 textSectionSpecifier:(long long)arg2 dataRange:(struct _NSRange)arg3;
- (id)init;
- (id)initWithPartSectionSpecifier:(id)arg1 textSectionSpecifier:(long long)arg2 peek:(BOOL)arg3 headerFieldNames:(id)arg4 dataRange:(struct _NSRange)arg5;

@end

