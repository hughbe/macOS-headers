//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFTableRowCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor, SFTableAlignmentSchema;

@protocol SFTableHeaderRowCardSection <SFTableRowCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) BOOL alignRowsToHeader;
@property(nonatomic) int verticalAlign;
@property(nonatomic) BOOL reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier;
@property(nonatomic) BOOL isSubHeader;
@property(copy, nonatomic) NSArray *data;
@property(retain, nonatomic) SFTableAlignmentSchema *alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end

