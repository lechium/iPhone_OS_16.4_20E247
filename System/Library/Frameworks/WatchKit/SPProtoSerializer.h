//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SPProtoSerializer : NSObject
{
}

+ (id)arrayWithSPPlist:(id)arg1;	// IMP=0x008000000002ed81
+ (id)dictionaryWithSPPlist:(id)arg1;	// IMP=0x008000000002e62f
+ (id)spPlistWithDictionary:(id)arg1;	// IMP=0x008000000002e0af
+ (id)spPlistWithArray:(id)arg1;	// IMP=0x008000000002db71
+ (id)protoSPObjectWithArray:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002da84
+ (id)protoSPObjectWithDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002d997
+ (id)protoSPObjectWithObject:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002d8fa
+ (id)protoSPObjectWithData:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002d85d
+ (id)protoSPObjectWithString:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002d7c0
+ (id)numberWithSPProtoSockPuppetObject:(id)arg1;	// IMP=0x008000000002d609
+ (id)protoSPObjectWithNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002d33f
+ (id)objectWithData:(id)arg1;	// IMP=0x008000000002d283
+ (id)dataWithObject:(id)arg1;	// IMP=0x008000000002d1a4

@end

