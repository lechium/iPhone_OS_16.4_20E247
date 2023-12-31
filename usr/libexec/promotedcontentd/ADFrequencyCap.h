//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADFrequencyCap : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_adMetadata;	// 16 = 0x10
    long long _downloadType;	// 24 = 0x18
    double _timestamp;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001b410
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) NSString *adMetadata; // @synthesize adMetadata=_adMetadata;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x001000000001b344
- (id)dictionaryRepresentation;	// IMP=0x001000000001b245
- (id)splitCapData:(id)arg1;	// IMP=0x001000000001b00e
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000001aee0
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000001adbb

@end

