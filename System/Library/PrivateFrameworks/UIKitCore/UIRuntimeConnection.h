//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeConnection : NSObject <NSCoding>
{
    id _source;	// 8 = 0x8
    id _destination;	// 16 = 0x10
    NSString *_label;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000094db5c
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) id destination; // @synthesize destination=_destination;
@property(retain, nonatomic) id source; // @synthesize source=_source;
- (void)connectForSimulator;	// IMP=0x000000000094db07
- (void)connect;	// IMP=0x000000000094db01
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000094da7e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000094d9b0

@end

