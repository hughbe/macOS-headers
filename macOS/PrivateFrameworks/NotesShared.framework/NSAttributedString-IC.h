//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (IC)
+ (id)TT_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateAttachments:(BOOL)arg4 error:(id *)arg5;
+ (id)TT_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 createNewAttachmentsInNote:(id)arg3 error:(id *)arg4;
+ (id)TT_attributedStringWithArchive:(const struct String *)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateNewAttachments:(BOOL)arg4 error:(id *)arg5;
- (id)ic_attributedStringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)ic_attributedStringByReplacingNewlineCharactersWithWhiteSpace;
- (void)enumerateAttachmentsInContext:(id)arg1 range:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateAttachmentsInContext:(id)arg1 range:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateAttachmentsInContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateUnclampedAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateClampedAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)ic_attributedSubstringFromRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) struct _NSRange ic_range;
- (BOOL)TT_isCopyableSize;
- (unsigned long long)TT_approximateAttachmentsSizeIncludingPreviews:(BOOL)arg1;
- (id)TT_serializeWithFlags:(unsigned long long)arg1 dataPersister:(id)arg2 managedObjectContext:(id)arg3;
- (void)TT_saveToArchive:(struct String *)arg1 flags:(unsigned long long)arg2 dataPersister:(id)arg3 managedObjectContext:(id)arg4;
@end

