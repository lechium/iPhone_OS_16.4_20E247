//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTransport_capture, NSData, NSDictionary;

@interface GTTransportMessage_capture : NSObject
{
    NSData *_payload;	// 8 = 0x8
    NSDictionary *_attributes;	// 16 = 0x10
    GTTransport_capture *_transport;	// 24 = 0x18
    NSData *_encodedAttributes;	// 32 = 0x20
    id _decodedPayload;	// 40 = 0x28
    unsigned int _decodedPayloadType;	// 48 = 0x30
    int _kind;	// 52 = 0x34
    unsigned int _serial;	// 56 = 0x38
    unsigned int _replySerial;	// 60 = 0x3c
    unsigned int _transportSize;	// 64 = 0x40
}

+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;	// IMP=0x00100000000068da
+ (id)messageWithKind:(int)arg1 objectPayload:(id)arg2;	// IMP=0x00100000000068a6
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;	// IMP=0x0010000000006865
+ (id)messageWithKind:(int)arg1 stringPayload:(id)arg2;	// IMP=0x0010000000006831
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;	// IMP=0x00100000000067f0
+ (id)messageWithKind:(int)arg1 plistPayload:(id)arg2;	// IMP=0x00100000000067bc
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(_Bool)arg3;	// IMP=0x001000000000677b
+ (id)messageWithKind:(int)arg1 boolPayload:(_Bool)arg2;	// IMP=0x0010000000006747
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;	// IMP=0x0010000000006706
+ (id)messageWithKind:(int)arg1 payload:(id)arg2;	// IMP=0x00100000000066d2
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2;	// IMP=0x001000000000669d
+ (id)messageWithKind:(int)arg1;	// IMP=0x001000000000666b
@property(readonly, nonatomic) unsigned int transportSize; // @synthesize transportSize=_transportSize;
@property(readonly, retain, nonatomic) GTTransport_capture *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) unsigned int replySerial; // @synthesize replySerial=_replySerial;
@property(readonly, nonatomic) unsigned int serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSData *encodedAttributes; // @synthesize encodedAttributes=_encodedAttributes;
@property(readonly, retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) int kind; // @synthesize kind=_kind;
- (id)objectPayload;	// IMP=0x00000000000063bf
- (id)stringPayload;	// IMP=0x0000000000006369
- (id)plistPayload;	// IMP=0x0000000000006216
- (_Bool)boolPayload;	// IMP=0x0000000000006152
- (_Bool)boolForKey:(id)arg1;	// IMP=0x0000000000006114
- (double)doubleForKey:(id)arg1;	// IMP=0x00000000000060d6
- (unsigned long long)uint64ForKey:(id)arg1;	// IMP=0x0000000000006098
- (unsigned int)uint32ForKey:(id)arg1;	// IMP=0x000000000000605a
- (id)attributeForKey:(id)arg1;	// IMP=0x0000000000006029
- (void)_setTransportSize:(unsigned int)arg1;	// IMP=0x0000000000006020
- (void)_setSerial:(unsigned int)arg1 replySerial:(unsigned int)arg2 transport:(id)arg3;	// IMP=0x0000000000005ffd
- (_Bool)hasBeenSent;	// IMP=0x0000000000005fe4
- (id)description;	// IMP=0x0000000000005f7e
- (void)dealloc;	// IMP=0x0000000000005f1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005ecf
- (id)initWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;	// IMP=0x0000000000005df8
- (id)initWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;	// IMP=0x0000000000005d83
- (id)initWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;	// IMP=0x0000000000005d0b
- (id)initWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(_Bool)arg3;	// IMP=0x0000000000005c7d
- (id)initWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;	// IMP=0x0000000000005c05
- (id)init;	// IMP=0x0000000000005bda

@end

