//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

#import <ActionKit/ENXMLSaxParserDelegate-Protocol.h>

@class ENMLWriter, ENNote, ENWebArchive, ENXMLDTD, ENXMLSaxParser, NSArray, NSString, NSURL;

@interface ENWebContentTransformer : NSValueTransformer <ENXMLSaxParserDelegate>
{
    BOOL _inTitleElement;
    NSString *_title;
    NSString *_mimeType;
    NSURL *_baseURL;
    ENXMLSaxParser *_htmlParser;
    ENMLWriter *_enmlWriter;
    ENXMLDTD *_enmlDTD;
    NSURL *_archiveBaseURL;
    ENWebArchive *_webArchive;
    ENNote *_note;
    NSArray *_ignorableTags;
    NSArray *_ignorableAttributes;
    NSArray *_skipTags;
    NSArray *_inlineElements;
    unsigned long long _ignoreElementCount;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
- (void).cxx_destruct;
@property(nonatomic) BOOL inTitleElement; // @synthesize inTitleElement=_inTitleElement;
@property(nonatomic) unsigned long long ignoreElementCount; // @synthesize ignoreElementCount=_ignoreElementCount;
@property(retain, nonatomic) NSArray *inlineElements; // @synthesize inlineElements=_inlineElements;
@property(retain, nonatomic) NSArray *skipTags; // @synthesize skipTags=_skipTags;
@property(retain, nonatomic) NSArray *ignorableAttributes; // @synthesize ignorableAttributes=_ignorableAttributes;
@property(retain, nonatomic) NSArray *ignorableTags; // @synthesize ignorableTags=_ignorableTags;
@property(retain, nonatomic) ENNote *note; // @synthesize note=_note;
@property(retain, nonatomic) ENWebArchive *webArchive; // @synthesize webArchive=_webArchive;
@property(retain, nonatomic) NSURL *archiveBaseURL; // @synthesize archiveBaseURL=_archiveBaseURL;
@property(retain, nonatomic) ENXMLDTD *enmlDTD; // @synthesize enmlDTD=_enmlDTD;
@property(retain, nonatomic) ENMLWriter *enmlWriter; // @synthesize enmlWriter=_enmlWriter;
@property(retain, nonatomic) ENXMLSaxParser *htmlParser; // @synthesize htmlParser=_htmlParser;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)parser:(id)arg1 didFailWithError:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (id)resourceFromWebResource:(id)arg1;
- (id)mimeTypeFromFilename:(id)arg1;
- (id)filenameFromURL:(id)arg1;
- (id)sanitizeURLAttribute:(id)arg1;
- (id)archiveBaseURLFromURL:(id)arg1;
- (id)htmlFromWebArchive:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

