//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSDoubleLinkedListNode : NSObject
{
    AMSDoubleLinkedListNode *_previous;
    id _object;
    AMSDoubleLinkedListNode *_next;
    NSString *_listIdentifier;
}

- (void).cxx_destruct;
@property(retain) NSString *listIdentifier; // @synthesize listIdentifier=_listIdentifier;
@property(retain) AMSDoubleLinkedListNode *next; // @synthesize next=_next;
@property(retain) id object; // @synthesize object=_object;
@property(retain) AMSDoubleLinkedListNode *previous; // @synthesize previous=_previous;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

