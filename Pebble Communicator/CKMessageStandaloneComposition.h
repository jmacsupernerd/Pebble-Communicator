/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "CKMessageComposition.h"

@class NSArray, NSString;

@interface CKMessageStandaloneComposition : CKMessageComposition
{
    NSString *_textString;
    NSString *_markupString;
    NSString *_subject;
    NSArray *_resources;
    BOOL _isTextOnly;
}

- (void)dealloc;
@property(nonatomic) BOOL isTextOnly; // @synthesize isTextOnly=_isTextOnly;
@property(retain, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *textString; // @synthesize textString=_textString;
@property(copy, nonatomic) NSString *markupString; // @synthesize markupString=_markupString;

@end

