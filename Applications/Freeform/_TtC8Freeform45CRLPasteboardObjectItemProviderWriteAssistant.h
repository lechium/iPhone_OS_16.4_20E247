//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSItemProvider, _TtC8Freeform19CRLPasteboardObject;

@interface _TtC8Freeform45CRLPasteboardObjectItemProviderWriteAssistant : NSObject
{
    MISSING_TYPE *writeAssistant;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0040000000650620
- (id)init;	// IMP=0x00100000006505c0
- (void)writePasteboardObject:(_TtC8Freeform19CRLPasteboardObject *)arg1 to:(NSItemProvider *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x0010000000650170
- (id)initWithStore:(id)arg1 context:(id)arg2;	// IMP=0x0010000000650100

@end
