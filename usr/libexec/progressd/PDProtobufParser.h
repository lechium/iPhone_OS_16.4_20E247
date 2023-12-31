//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PDParserStreamedResponseProvider;

@interface PDProtobufParser
{
    id <PDParserStreamedResponseProvider> _provider;	// 8 = 0x8
    CDUnknownBlockType _payloadProcessBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008fcad
- (id)parseData:(id)arg1 expectedClass:(Class)arg2 error:(id *)arg3;	// IMP=0x001000000008f697
- (_Bool)supportsStreamedParsing;	// IMP=0x001000000008f54e
- (id)init;	// IMP=0x001000000008f501

@end

