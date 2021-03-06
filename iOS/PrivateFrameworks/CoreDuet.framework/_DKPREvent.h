/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPREvent : PBCodable <NSCopying> {
    double  _creationDate;
    double  _endDate;
    struct { 
        unsigned int creationDate : 1; 
    }  _has;
    NSString * _identifier;
    NSMutableArray * _metadatas;
    _DKPRSource * _source;
    double  _startDate;
    _DKPRStream * _stream;
    _DKPRValue * _value;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
