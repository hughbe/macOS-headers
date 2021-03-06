/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSpatialPlaceLookupResult : PBCodable <NSCopying> {
    GEOMapRegion * _displayMapRegion;
    struct { 
        unsigned int has_statusCode : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayMapRegion : 1; 
        unsigned int read_places : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _places;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _statusCode;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) bool hasDisplayMapRegion;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic, retain) NSMutableArray *places;
@property (nonatomic) int statusCode;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)placeType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMapRegion;
- (bool)hasDisplayMapRegion;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)placeAtIndex:(unsigned long long)arg1;
- (id)places;
- (unsigned long long)placesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayMapRegion:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setPlaces:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
