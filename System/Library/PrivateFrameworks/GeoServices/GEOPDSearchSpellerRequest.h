//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchKeyValuePairList, GEOPDSearchLanguageContext, GEOPDSearchLocationContext, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSpellerRequest : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOPDSearchKeyValuePairList *_abConfigParams;	// 16 = 0x10
    GEOPDSearchLanguageContext *_languageContext;	// 24 = 0x18
    GEOPDSearchLocationContext *_locationContext;	// 32 = 0x20
    NSString *_query;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _requestFlags;	// 60 = 0x3c
    unsigned int _maxSuggestions;	// 64 = 0x40
    int _queryType;	// 68 = 0x44
    _Bool _performCompletion;	// 72 = 0x48
    _Bool _useCache;	// 73 = 0x49
    struct {
        unsigned int has_requestFlags:1;
        unsigned int has_maxSuggestions:1;
        unsigned int has_queryType:1;
        unsigned int has_performCompletion:1;
        unsigned int has_useCache:1;
        unsigned int read_abConfigParams:1;
        unsigned int read_languageContext:1;
        unsigned int read_locationContext:1;
        unsigned int read_query:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00100000011ea19f
- (void).cxx_destruct;	// IMP=0x00000000011eb279
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000011eb0e9
- (unsigned long long)hash;	// IMP=0x00000000011eaf90
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011ead48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011eaa8b
- (void)copyTo:(id)arg1;	// IMP=0x00000000011ea8e5
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000011ea8bc
- (void)writeTo:(id)arg1;	// IMP=0x00000000011ea5d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011ea5cc
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000011e9f54
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000011e9f42
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000011e98f4
- (id)jsonRepresentation;	// IMP=0x00000000011e98e5
- (id)dictionaryRepresentation;	// IMP=0x00000000011e943a
- (id)description;	// IMP=0x00000000011e938b
- (int)StringAsRequestFlags:(id)arg1;	// IMP=0x00000000011e92f9
- (id)requestFlagsAsString:(int)arg1;	// IMP=0x00000000011e92b0
@property(nonatomic) _Bool hasRequestFlags;
@property(nonatomic) int requestFlags;
@property(nonatomic) _Bool hasUseCache;
@property(nonatomic) _Bool useCache;
- (int)StringAsQueryType:(id)arg1;	// IMP=0x00000000011e9136
- (id)queryTypeAsString:(int)arg1;	// IMP=0x00000000011e90ed
@property(nonatomic) _Bool hasQueryType;
@property(nonatomic) int queryType;
@property(retain, nonatomic) GEOPDSearchKeyValuePairList *abConfigParams;
@property(readonly, nonatomic) _Bool hasAbConfigParams;
@property(nonatomic) _Bool hasMaxSuggestions;
@property(nonatomic) unsigned int maxSuggestions;
@property(nonatomic) _Bool hasPerformCompletion;
@property(nonatomic) _Bool performCompletion;
@property(retain, nonatomic) GEOPDSearchLanguageContext *languageContext;
@property(readonly, nonatomic) _Bool hasLanguageContext;
@property(retain, nonatomic) GEOPDSearchLocationContext *locationContext;
@property(readonly, nonatomic) _Bool hasLocationContext;
@property(retain, nonatomic) NSString *query;
@property(readonly, nonatomic) _Bool hasQuery;
- (id)initWithData:(id)arg1;	// IMP=0x00000000011e7fd0
- (id)init;	// IMP=0x00000000011e7f74

@end

