//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCoding-Protocol.h>
#import <ActionKit/NSCopying-Protocol.h>

@class ENLinkedNotebookRef, NSString;

@interface ENNoteRef : NSObject <NSCoding, NSCopying>
{
    long long _type;
    NSString *_guid;
    ENLinkedNotebookRef *_linkedNotebook;
}

+ (id)noteRefFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ENLinkedNotebookRef *linkedNotebook; // @synthesize linkedNotebook=_linkedNotebook;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)asData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

