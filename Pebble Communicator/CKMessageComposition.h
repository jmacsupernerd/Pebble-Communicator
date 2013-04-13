/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <UIKit/UIKit.h>

@class NSArray, NSString;

@interface CKMessageComposition : NSObject
{
}

+ (id)newCompositionForText:(id)arg1;
+ (id)newCompositionForMessage:(id)arg1;
+ (id)newComposition;
+ (void)deleteFileWithPrefix:(id)arg1 path:(id)arg2;
+ (id)messageCompositionFromFileWithPrefix:(id)arg1 path:(id)arg2;
@property(readonly, nonatomic) BOOL hasContent;
@property(nonatomic) BOOL isTextOnly;
@property(copy, nonatomic) NSString *markupString;
@property(copy, nonatomic) NSString *textString;
@property(retain, nonatomic) NSArray *resources;
@property(copy, nonatomic) NSString *subject;
- (void)writeToFileWithPrefix:(id)arg1 path:(id)arg2;

@end

